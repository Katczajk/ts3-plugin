

/* we guard include up here */
#ifndef itp_func_H
#define itp_func_H

	#include "itp_func.h"

#endif // !itp_func_H

static struct TS3Functions ts3Functions;


void itp_moveclientstochannel(uint64 serverConnectionHandlerID, anyID Clientlist, anyID myID, uint64 myChannel)
{

	ts3Functions.getClientList(serverConnectionHandlerID, &Clientlist);
	ts3Functions.getClientID(serverConnectionHandlerID, &myID);
	ts3Functions.getChannelOfClient(serverConnectionHandlerID, &myID, &myChannel);
	return 0;
}
