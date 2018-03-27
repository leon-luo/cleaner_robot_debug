/******************************************************************************

  Copyright (C), 2017-2028, 

 ******************************************************************************
  File Name     : key_data.h
  Version       : Initial Draft
  Author        : Leon
  Created       : 2018/2/10
  Last Modified :
  Description   : key_data.h header file
  Function List :
  History       :
  1.Date        : 2018年2月10日
    Author      : Leon
    Modification: Created file
******************************************************************************/
#ifndef __KEY_DATA_H__
#define __KEY_DATA_H__

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/******************************************************************************
 * include header files list
 ******************************************************************************/
#include "key_unit.h"

/******************************************************************************
 * external variables
 ******************************************************************************/

/******************************************************************************
 * external function prototypes
 ******************************************************************************/

/******************************************************************************
 * project-wide global variables
 ******************************************************************************/

/******************************************************************************
 * macros
 ******************************************************************************/

/******************************************************************************
 * constants
 ******************************************************************************/

/******************************************************************************
 * enum
 ******************************************************************************/
typedef enum KEY_ID
{
	HOME_KEY_ID,
	POWER_KEY_ID,
	KEY_SUM,
}KEY_ID_ENUM;

/******************************************************************************
 * struct
 ******************************************************************************/

/******************************************************************************
 * class
 ******************************************************************************/

class key_data
{
protected:
	key_data();
	~key_data();
	
public:
	static key_data* get_instance(void);
	static void release_instance(void);

	void set_key_status(KEY_ID_ENUM id, KEY_STATUS_ENUM value);
	
	bool get_single_click(KEY_ID_ENUM id);
	bool clear_single_click(KEY_ID_ENUM id);
	
	bool get_double_click(KEY_ID_ENUM id);
	bool clear_double_click(KEY_ID_ENUM id);
	
	bool get_long_click(KEY_ID_ENUM id);
	bool clear_long_click(KEY_ID_ENUM id);

private:
	key_unit* get_key_unit_instance(KEY_ID_ENUM id);
	
	key_unit home_key_;
	key_unit power_key_;

	key_data(const key_data&){};
	key_data& operator=(const key_data&){};
	
	static key_data* p_instance_;
	static pthread_mutex_t mutex_;
};


/******************************************************************************
 * internal function prototypes
 ******************************************************************************/



/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __KEY_DATA_H__ */
