#ifndef __KISS_H
#define __KISS_H

/* Frame End */
#define KISS_FEND (0xc0)

/* Frame Escape */
#define KISS_FESC (0xdb)

/* Transposed Frame End */
#define KISS_TFEND (0xdc)

/* Transposed Frame Escape */
#define KISS_TFESC (0xdd)

void kiss_init(void);

#endif
