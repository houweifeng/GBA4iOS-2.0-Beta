#pragma once

#include <config.h>

#if !defined CONFIG_BLUETOOTH_SERVER
	#if (defined CONFIG_BLUETOOTH_BLUEZ && defined CONFIG_ENV_LINUX) || defined CONFIG_BLUETOOTH_BTSTACK
		#define CONFIG_BLUETOOTH_SERVER
	#endif
#endif

#if defined CONFIG_BLUETOOTH_BLUEZ || defined CONFIG_BLUETOOTH_BTSTACK
	#define CONFIG_BLUETOOTH_SCAN_CACHE_USAGE
	#define CONFIG_BLUETOOTH_SCAN_SECS
#endif
