/*--------------------------------------------------------------------
This file is part of the Arduino WiFiEsp library.

The Arduino WiFiEsp library is free software: you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

The Arduino WiFiEsp library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with The Arduino WiFiEsp library.  If not, see
<http://www.gnu.org/licenses/>.
--------------------------------------------------------------------*/

#ifndef EspDebug_H
#define EspDebug_H

#include <stdio.h>

// Change _ESPLOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#define _ESPLOGLEVEL_ 4

#if _ESPLOGLEVEL_ > 3
    #define LOGDEBUG(x)      Serial.println(x);
    #define LOGDEBUG0(x)     Serial.print(x);
    #define LOGDEBUG1(x,y)   Serial.print(x); Serial.print(" "); Serial.println(y);
    #define LOGDEBUG2(x,y,z) Serial.print(x); Serial.print(" "); Serial.print(y); Serial.print(" "); Serial.println(z);
#else
    #define LOGDEBUG(x)
    #define LOGDEBUG0(x)
    #define LOGDEBUG1(x,y)
    #define LOGDEBUG2(x,y,z)
#endif

#if _ESPLOGLEVEL_ > 2
    #define LOGERROR1(x,y) Serial.print("[WiFiEsp] "); Serial.print(x); Serial.print(" "); Serial.println(y);
    #define LOGWARN1(x,y)  Serial.print("[WiFiEsp] "); Serial.print(x); Serial.print(" "); Serial.println(y);
    #define LOGINFO(x)     Serial.print("[WiFiEsp] "); Serial.println(x);
    #define LOGINFO1(x,y)  Serial.print("[WiFiEsp] "); Serial.print(x); Serial.print(" "); Serial.println(y);
#else
    #define LOGERROR1(x,y)
    #define LOGWARN1(x,y)
    #define LOGINFO(x)
    #define LOGINFO1(x,y)
#endif

#if _ESPLOGLEVEL_ > 1
   #define LOGWARN(x)     Serial.print("[WiFiEsp] "); Serial.println(x);
#else
   #define LOGWARN(x)
#endif

#if _ESPLOGLEVEL_ > 0
    #define LOGERROR(x)    Serial.print("[WiFiEsp] "); Serial.println(x);
#else
    #define LOGERROR(x)
#endif

#endif
