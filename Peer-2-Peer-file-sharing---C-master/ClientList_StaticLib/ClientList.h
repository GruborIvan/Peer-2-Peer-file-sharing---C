#pragma once
#include <WinSock2.h>

#define WIN32_LEAN_AND_MEAN             

typedef struct Klijent
{
    SOCKET socket;  //Accepted socket klijenta..
    int port;
    struct Klijent* next;
} Klijent;

void init_criticalSectionClientList();

void init_client_list();

int DodavanjeKlijenataUListu(SOCKET socket, int port);

Klijent* GetClientByPort(int clientPort);

void RemoveClientFromList(int clientPort);

int GetLastClientPort();

void EmptyClientList();