#include <stdio.h>

#define MAX 20

int epsilon[MAX][MAX];
int visited[MAX];
int n;

void dfs(int state) {
    visited[state] = 1;

    for (int i = 0; i < n; i++) {
        if (epsilon[state][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int transitions;

    printf("Enter number of states: ");
    scanf("%d", &n);

    // Initialize matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            epsilon[i][j] = 0;
        }
    }

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &transitions);

    printf("Enter epsilon transitions (from to):\n");

    for (int i = 0; i < transitions; i++) {
        int from, to;

        scanf("%d %d", &from, &to);

        epsilon[from][to] = 1;
    }

    printf("\nEpsilon Closures:\n");

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++)
            visited[j] = 0;

        dfs(i);

        printf("e-closure(q%d) = { ", i);

        for (int j = 0; j < n; j++) {
            if (visited[j])
                printf("q%d ", j);
        }

        printf("}\n");
    }

    return 0;
}