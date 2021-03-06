/**
 * @file ardupilot_table.h
 * @brief Ardupilot app table definition
 */
#ifndef _ARDUPILOT_TABLE_H
#define _ARDUPILOT_TABLE_H
#include <stdint.h>
#include "ardupilot_table.h"
#include "port_lib.h"

/**
 * @defgroup ARDUPILOT_TABLES
 * Input parameters for gs interface applications.
 * @ingroup TABLES
 */

/**
 * @struct ArdupilotTable_t
 * @brief Input parameters for ardupilot application
 * @ingroup ARDUPILOT_TABLES
 */
typedef struct
{
  portType_e PortType; ///< connection type to autopilot
  uint16_t BaudRate;   ///< baudrate (only for serial)
  uint16_t Portin;     ///< input port number (only used for socket)
  uint16_t Portout;    ///< output port number (only used for socket)
  char Address[50];    ///< port address (ip address or serial port name)
}ArdupilotTable_t;


#endif
