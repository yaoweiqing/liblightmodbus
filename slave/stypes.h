#define _SLAVETYPES

#include <inttypes.h>

//Declarations for slave types

typedef struct
{
	uint8_t Length; //Length of frame, if it's equal to 0, frame is not ready
	uint8_t *Frame; //Response frame content
} MODBUSResponseStatus; //Type containing information about frame that is set up at slave side

typedef struct
{
	uint8_t Address; //Slave address
	uint16_t *Registers; //Slave holding registers
	uint16_t RegisterCount; //Slave register count
	uint8_t *RegisterMask; //Masks for write protection (bit of value 1 - write protection)
	uint16_t RegisterMaskLength; //Masks length (each mask covers 8 registers)
	MODBUSResponseStatus Response; //Slave response formatting status
} MODBUSSlaveStatus; //Type containing slave device configuration data
