import java.util.*;
public class Hello {

    public static void main(String[] args) {
	Scanner in=new Scanner(System.in);
	String a=in.nextLine();
    int d=0;
    String b[]=a.split(" ");
    for(String x:b)
    {
        String c[]=x.split(":");
        int h=Integer.parseInt(c[0]);
        int m=Integer.parseInt(c[1]);
        if(h==10 && m>0)
        {
            d++;
        }
        else if(h>10)
        {
            d++;
        }
    }
    System.out.print(d);
	}
}



Question:


A certain number of people attended a meeting which was to begin at 10:00 am on a given day. The arrival time in HH:MM
format of those who attended the meeting is passed as the input in a single line, with each arrival time by a space. The
program must print the count of people who came late (after 10:00 am) to the meeting.

Input Format:
The first line contains the arrival time separated by a space.

Output Format:
The first line contains the count of late comers.

Boundary Conditions:
The length of the input string is between 4 to 10000.
The time HH:MM will be in 24 hour format (HH is hours and MM is minutes).


Example Input/Output 1:

Input:
10:00 9:55 10:02 9:45 11:00

Output:
2

Explanation:
The 2 people were those who came at 10:02 and 11:00
