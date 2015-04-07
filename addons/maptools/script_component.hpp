#define COMPONENT maptools
#include "\z\ace\Addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_MAPTOOLS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MAPTOOLS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MAPTOOLS
#endif

#include "\z\ace\Addons\main\script_macros.hpp"


#define MARKERNAME_MAPTOOL_FIXED "ACE_MapToolFixed"
#define MARKERNAME_MAPTOOL_ROTATINGNORMAL "ACE_MapToolRotatingNormal"
#define MARKERNAME_MAPTOOL_ROTATINGSMALL "ACE_MapToolRotatingSmall"
