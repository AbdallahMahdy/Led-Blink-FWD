/****************************************************************/
/* !Author		: 	Abdullah Mahdy                              */
/* !Date 		:  	NOV 22,2022                                 */
/* !Version		: 	V0.1										*/
/* !Layer 		:   Service Layer								*/
/* !FileName 	:  	MACROS.h									*/
/****************************************************************/
#ifndef _MACROS_H_  /* start of if*/
#define _MACROS_H_

#define set_bit(reg,bitno)    	reg |= 	(1 << bitno)
#define clr_bit(reg,bitno)    	reg &= ~(1 << bitno)
#define toggle_bit(reg,bitno) 	reg ^= 	(1 << bitno)
#define get_bit(reg,bitno) 		(reg >> bitno) & 0x01




#endif  /*  end of if*/

