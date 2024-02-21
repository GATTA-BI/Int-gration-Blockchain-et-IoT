#ifndef CONSTANTS_H
#define CONSTANTS_H 

#include <Arduino.h>

namespace Constants {
    //Your local WIFI SSID and password
     const String MY_SSID = "Redmi";
     const String MY_PASSWORD =  "71020298";

    //Base URL for Algod TESTNET
     const String BASE_URL = "https://testnet-algorand.api.purestake.io/ps2/v2/";
    //Base URL for Indexer TESTNET
     const String IDX_BASE_URL = "https://testnet-algorand.api.purestake.io/idx2/v2/";
    //PureStake API Key
     const String API_KEY = "8kedKf2xqD4jCn7DCLpf49aiNmOYPcJ2iVK3x2b0";

};

#endif

