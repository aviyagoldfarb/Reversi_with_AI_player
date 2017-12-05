//
// Created by udi on 03/12/17.
//

#ifndef EX4_SERVER_H
#define EX4_SERVER_H


class Server {
public:
    Server(int port);
    void start();
    void stop();
    int* getCell(int client);

private:
    int port;
    int serverSocket;

    void handleClient(int blackClientSocket, int whiteClientSocket);
};


#endif //EX4_SERVER_H
