

#ifndef LCD_CFG_H_
#define LCD_CFG_H_

/**********choose lcd connection config _4_BIT or _8_BIT *********/
#define LCD_Mode         _4_BIT

#define RS			     PINA7
#define EN_LCD		     PINA2

/***********************8 BIT Mode ONLY***************************/
#define LCD_PORT	     PA

/***********************4 BIT Mode ONLY***************************/

#define D7    PINA6
#define D6    PINA5
#define D5    PINA4
#define D4    PINA3


#endif /* LCD_CFG_H_ */