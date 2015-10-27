/************************************************************************//** *
 * \file main.c
 *
 * \addtogroup main
 * \{
 *
 * \brief
 *
 * \note
 *
 * \author 
 * \date 
 *
 ****************************************************************************/

/****************************************************************************
 *                              INCLUDE FILES                               *
 ****************************************************************************/
#include <stdlib.h>
#include <avr/interrupt.h>

/****************************************************************************
 *                     PRIVATE FUNCTION DECLARATIONS                        *
 ****************************************************************************/

#define CPU_PRESCALE(n) (CLKPR = 0x80, CLKPR = (n))
int core(void);
/****************************************************************************
 *                              PRIVATE DATA                                *
 ****************************************************************************/

/****************************************************************************
 *                     PRIVATE FUNCTION DEFINITIONS                         *
 ****************************************************************************/

#ifdef __AVR__
int main(void)
{
  core();
}
#endif

int core(void)
{
    CPU_PRESCALE(0x01);
    sei();
    while (1)
    {
        //main program goes here
    }
    return 0;
}
