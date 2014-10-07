//Michael Wallace MtSAC

//Copyright (c) 2014 ICRL

//See the file license.txt for copying permission.

//example
/*
if(doubleClick(Btn6D))
else //not double click
*/

int waitTime1 = 100;
int watiTIme2 = 100;

/********************************************
* DOUBLE CLICK                              *
********************************************/
bool doubleClick(TVexJoysticks button)
{
  wait1Msec(waitTime1);//wait for button to be released
  if(vexRT(button) == 0)
  {
    wait1Msec(waitTime2);//wait for button push 
    if(vexRT(button) == 1)//is the button click again?
    {
      while(vexRT(button) == 1);//loop until button is released then return
      return true;
    }
  }
  return false;
}