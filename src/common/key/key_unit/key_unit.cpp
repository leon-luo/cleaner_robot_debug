/******************************************************************************

  Copyright (C), 2017-2028, HUIZHOU BLUEWAY ELECTRONICS Co., Ltd.

 ******************************************************************************
  File Name     : key_unit.cpp
  Version       : Initial Draft
  Author        : Leon
  Created       : 2018/2/10
  Last Modified :
  Description   : 按键单元
  Function List :
  History       :
  1.Date        : 2018年2月10日
    Author      : Leon
    Modification: Created file
******************************************************************************/

/******************************************************************************
 * include header files list
 ******************************************************************************/

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

/******************************************************************************
 * struct
 ******************************************************************************/

/******************************************************************************
 * class
 ******************************************************************************/
/*****************************************************************************
 Prototype    : key_unit.key_unit
 Description  : 构造函数
 Input        : None
 Output       : None
 Return Value : key_unit
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
key_unit::key_unit()
{
	LONG_PRESS_STRU value;
	
	value.enable_clocker = false;
	value.keep_time = 0;
	value.valid_time = 0;
	init_hold(value);
}

/*****************************************************************************
 Prototype    : key_unit.~key_unit
 Description  : 析构函数
 Input        : None
 Output       : None
 Return Value : key_unit
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
key_unit::~key_unit()
{

}

/*****************************************************************************
 Prototype    : key_unit.set_status
 Description  : 设置按键状态
 Input        : KEY_STATUS_ENUM value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_status(KEY_STATUS_ENUM value)
{
	data.status = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_status
 Description  : 获取按键状态
 Input        : void  
 Output       : None
 Return Value : KEY_STATUS_ENUM
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
KEY_STATUS_ENUM key_unit::get_status(void)
{
	return data.status;
}

/*****************************************************************************
 Prototype    : key_unit.set_single_click
 Description  : 设置按键单击或短按状态
 Input        : bool value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_single_click(bool value)
{
	data.single_click = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_single_click
 Description  : 获取按键单击或短按状态
 Input        : void  
 Output       : None
 Return Value : bool
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
bool key_unit::get_single_click(void)
{
	return data.single_click;
}

/*****************************************************************************
 Prototype    : key_unit.set_double_click
 Description  : 获取按键双击或连续两次短按状态
 Input        : bool value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_double_click(bool value)
{
	data.double_click = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_double_click
 Description  : 获取获取按键双击或连续两次短按状态
 Input        : void  
 Output       : None
 Return Value : bool
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
bool key_unit::get_double_click(void)
{
	return data.double_click;
}

/*****************************************************************************
 Prototype    : key_unit.set_long_click
 Description  : 设置按键长按有效状态
 Input        : bool value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_long_click(bool value)
{
	data.long_click = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_long_click
 Description  : 获取按键长按有效状态
 Input        : void  
 Output       : None
 Return Value : bool
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
bool key_unit::get_long_click(void)
{
	return data.long_click;
}

/*****************************************************************************
 Prototype    : key_unit.set_enable_clocker
 Description  : 设置按下使能使能计时状态
 Input        : bool value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_enable_clocker(bool value)
{
	data.hold.enable_clocker = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_enable_clocker
 Description  : 获取按下使能使能计时状态
 Input        : void  
 Output       : None
 Return Value : bool
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
bool key_unit::get_enable_clocker(void)
{
	return data.hold.enable_clocker;
}

/*****************************************************************************
 Prototype    : key_unit.set_valid_time
 Description  : 设置长按保持多长时间为有效
 Input        : uint32_t value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_valid_time(uint32_t value)
{
	data.hold.valid_time = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_valid_time
 Description  : 获取长按保持多长时间为有效
 Input        : void  
 Output       : None
 Return Value : uint32_t
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
uint32_t key_unit::get_valid_time(void)
{
	return data.hold.valid_time;
}

/*****************************************************************************
 Prototype    : key_unit.set_keep_time
 Description  : 设置当前按键保持按下了多长时间
 Input        : uint32_t value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::set_keep_time(uint32_t value)
{
	data.hold.keep_time = value;
}

/*****************************************************************************
 Prototype    : key_unit.get_keep_time
 Description  : 获取当前按键保持按下了多长时间
 Input        : void  
 Output       : None
 Return Value : uint32_t
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
uint32_t key_unit::get_keep_time(void)
{
	return data.hold.keep_time;
}

/*****************************************************************************
 Prototype    : key_unit.init_hold
 Description  : 初始化按键保持数据
 Input        : LONG_PRESS_STRU value  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::init_hold(LONG_PRESS_STRU value)
{
	data.hold = value;
}

/*****************************************************************************
 Prototype    : key_unit.init_hold
 Description  : 初始化按键保持数据
 Input        : bool enable_clocker = false  
                uint32_t valid_time = 100    
                uint32_t keep_time = 0       
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::init_hold(bool enable_clocker = false, uint32_t valid_time = 100, uint32_t keep_time = 0)
{
	set_enable_clocker(enable_clocker);
	set_valid_time(valid_time);
	set_keep_time(keep_time);
}

/*****************************************************************************
 Prototype    : update_single_click
 Description  : 更新单机或短按状态
 Input        : void  
 Output       : None
 Return Value : virtual
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::update_single_click(void)
{
	
}

/*****************************************************************************
 Prototype    : update_double_click
 Description  : 更新双击或连续短按两次有效状态
 Input        : void  
 Output       : None
 Return Value : virtual
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::update_double_click(void)
{

}

/*****************************************************************************
 Prototype    : key_unit.update_long_click
 Description  : 更新长按有效状态
 Input        : void  
 Output       : None
 Return Value : void
 
  History        :
  1.Date         : 2018/2/11
    Author       : Leon
    Modification : Created function
*****************************************************************************/
void key_unit::update_long_click(void)
{
	bool ret = false;
	uint32_t keep_time = 0;
	uint32_t valid_time = 0;
	ret = get_enable_clocker();
	if (true == ret)
	{
		keep_time = get_keep_time();
		valid_time = get_valid_time();
		if (keep_time >= valid_time)
		{
			set_long_click(true);

			ret = get_single_click();
			if (true == ret)
			{
				set_single_click(false);
			}
		}
	}
}

uint32_t key_unit::get_press_hold_time(void)
{
	uint32_t keep_time = 0;
	uint32_t valid_time = 0;

	keep_time = get_keep_time();
	valid_time = get_valid_time();
}


/******************************************************************************
 * internal function prototypes
 ******************************************************************************/

