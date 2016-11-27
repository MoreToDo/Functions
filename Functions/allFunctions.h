#pragma once

int getPosInt(string msg)// function to get the interger value
{
   int num = 0;
   do //do while for error checking 
   {
      cout << msg << endl;
      cin >> num;
   } while (num <= 0);
   return num;
}

int areaOfCircle(int r)
{
   return PI * pow(r, 2);
}

int volOfRect(int r)
{
   return 4 / 3.0 * PI * pow(r, 3);
}