#include <stdio.h>

#define MAX 20

int transition[MAX][MAX];
int visited[MAX];
int n;

void epsilonClosure(int state) {
    visited[state] = 1;

    for (int i = 0; i < n; i++) {
        if (transition[state][i] == 1 && visited[i] == 0) {
            epsilonClosure(i);
        }
    }
}

int main() {
    int e;

    printf("Enter number of states: ");
    scanf("%d", &n);

    // Initialize transition matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transition[i][j] = 0;
        }
    }

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &e);

    printf("Enter transitions (from state to state):\n");

    for (int i = 0; i < e; i++) {
        int from, to;

        scanf("%d %d", &from, &to);

        transition[from][to] = 1;
    }

    printf("\nEpsilon Closure of all states:\n");

    for (int state = 0; state < n; state++) {

        // Reset visited
        for (int i = 0; i < n; i++) {
            visited[i] = 0;
        }

        epsilonClosure(state);

        printf("e-closure(q%d) = { ", state);

        for (int i = 0; i < n; i++) {
            if (visited[i])
                printf("q%d ", i);
        }

        printf("}\n");
    }

    return 0;
}