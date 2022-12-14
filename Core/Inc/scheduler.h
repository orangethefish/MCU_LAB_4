/*
 * scheduler.h
 *
 *  Created on: Dec 07, 2022
 *      Author: DUY HOA
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
unsigned char SCH_Add_Task(void(*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
unsigned char SCH_Delete_Task(uint32_t TASK_INDEX);
void SCH_Go_To_Sleep(void);
#endif /* INC_SCHEDULER_H_ */
