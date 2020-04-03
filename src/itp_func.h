#pragma once

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32)
#pragma warning (disable : 4100)  /* Disable Unreferenced parameter warning */
#include <Windows.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "teamspeak/public_errors.h"
#include "teamspeak/public_errors_rare.h"
#include "teamspeak/public_definitions.h"
#include "teamspeak/public_rare_definitions.h"
#include "teamspeak/clientlib_publicdefinitions.h"
#include "ts3_functions.h"
#include "plugin.h"


/* IT-Pilz Functions here */

void itp_moveclientstochannel(uint64 serverConnectionHandlerID, anyID Clientlist, anyID myID, uint64 myChannel);