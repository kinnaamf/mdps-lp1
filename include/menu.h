//
// Created by dimoje on 17.02.2026.
//

#ifndef GRAPHS_MENU_H
#define GRAPHS_MENU_H

#include <iostream>

inline void print_line() {
    cout << string(75, '-') << '\n';
}

inline void print_menu() {
    print_line();
    cout << "MENU\n";
    print_line();

    cout << "Insertion:\n";
    cout << "  1. Insert adjacency matrix\n";
    cout << "  2. Insert incidence matrix\n";
    cout << "  3. Insert adjacency list\n\n";

    cout << "Conversion:\n";
    cout << "  4. Convert adjacency matrix to adjacency list\n";
    cout << "  5. Convert incidence matrix to adjacency list\n";
    cout << "  6. Convert adjacency list to adjacency matrix\n";
    cout << "  7. Convert adjacency list to incidence matrix\n\n";

    cout << "Display:\n";
    cout << "  8. Display adjacency matrix\n";
    cout << "  9. Display incidence matrix\n";
    cout << "  10. Display adjacency list\n\n";

    cout << "Save:\n";
    cout << "  11. Save adjacency list\n\n\n";

    cout << "  0. Exit\n";
    print_line();
}

#endif //GRAPHS_MENU_H