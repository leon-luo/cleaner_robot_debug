/******************************************************************************

  版权所有 (C), 2017-2028 

 ******************************************************************************
  文件名称: cfg_base_type.h
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年9月1日
  最近修改:
  功能描述: 配置层基本数据类型声明的头文件
  函数列表:
  修改历史:
  1.日     期: 2017年9月1日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/
#ifndef __CFG_BASE_TYPE_H__
#define __CFG_BASE_TYPE_H__

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/******************************************************************************
 * 包含头文件
 ******************************************************************************/
#include "base_type.h"
#include "mobile_robot_type.h"

/******************************************************************************
 * 外部变量声明
 ******************************************************************************/

/******************************************************************************
 * 外部函数声明
 ******************************************************************************/

/******************************************************************************
 * 全局变量
 ******************************************************************************/

/******************************************************************************
 * 宏定义
 ******************************************************************************/

/******************************************************************************
 * 常量声明
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/


/******************************************************************************
 * 结构体类型
 ******************************************************************************/
typedef struct ACTION_STATUS
{
	ACTION_STATUS_ENUM curr_action;
	ACTION_STATUS_ENUM last_action;
}ACTION_STATUS_STRU;


/******************************************************************************
 * 类声明
 ******************************************************************************/

/******************************************************************************
 * 内部函数声明
 ******************************************************************************/



/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __CFG_BASE_TYPE_H__ */
