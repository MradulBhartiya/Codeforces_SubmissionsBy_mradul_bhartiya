#include <iostream>
#include <string>

using namespace std;

void solve() {
    long long n, x, s;
    cin >> n >> x >> s;
    string u;
    cin >> u;

    long long empty_tables = x;
    long long partial_seats = 0; // Use long long to avoid overflow (can reach x * s)
    long long a_as_e = 0;        // Count of Ambiverts acting as Extroverts
    long long seated = 0;

    for (char p : u) {
        if (p == 'I') {
            if (empty_tables > 0) {
                // Open a new table
                empty_tables--;
                partial_seats += s - 1;
                seated++;
            }
        } 
        else if (p == 'E') {
            if (partial_seats > 0) {
                // Take an available seat at an open table
                partial_seats--;
                seated++;
            } 
            else if (empty_tables > 0 && a_as_e > 0) {
                // Rollback: Change a previous 'A' from an Extrovert to an Introvert
                // The 'A' now takes 1 empty table and gives back its partial seat + (s - 1) new ones
                empty_tables--;
                a_as_e--;
                partial_seats += s; 
                
                // Now there are seats available for the current 'E'
                partial_seats--; 
                seated++;
            }
        } 
        else if (p == 'A') {
            if (partial_seats > 0) {
                // Conserving empty tables is optimal, act as an Extrovert
                partial_seats--;
                a_as_e++;
                seated++;
            } 
            else if (empty_tables > 0) {
                // No partial seats, must act as an Introvert to sit
                empty_tables--;
                partial_seats += s - 1;
                seated++;
            }
        }
    }
    
    cout << seated << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}