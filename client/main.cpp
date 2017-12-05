//
// Created by udi on 04/12/17.
//
#include "Client.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    Client client("127.0.0.1", 8000);
    try {
        client.connectToServer();
    } catch (const char *msg) {
        cout << "Failed to connect to server. Reason:" << msg << endl;
        exit(-1);
    }
    int x, y;
    while (true) {
        cout << "Enter an exercise (e.g., 15*19):";
        cin >> x >> y;
        cout << "Sending exercise: " << x << y << endl;
        string result = to_string(x) + "," + to_string(y);
        try {
            result = client.sendCell(result);
            cout << "Result: " << result << endl;
        } catch (const char *msg) {
            cout << "Failed to send exercise to server. Reason: " << msg << endl;
        }
        if (findNewCell(string)) {
            return;
        }
    }
}

