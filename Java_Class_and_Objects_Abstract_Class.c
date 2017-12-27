import java.util.*;
public class Hello {
 public static void main(String[] args) {
 Scanner sc = new Scanner(System.in);
 Laptop laptop = new AcerLaptop(sc.nextInt(), sc.next(), sc.next());
 System.out.println(laptop.getRAM()+"GB");
 System.out.println(laptop.getProcessor());
 System.out.println(laptop.getBrand());
 }
}

public abstract class Laptop {
 public abstract int getRAM();
 public abstract String getProcessor();
 public abstract String getBrand();
}

public class AcerLaptop extends Laptop
{
    int a;
    String b,c;
    public AcerLaptop(int d, String e, String f)
    {
        a=d;
        b=e;
        c=f;
    }
    public int getRAM()
    {
        return a;
    }
    public String getProcessor()
    {   
        return b;
    }
    public String getBrand()
    {
        return c;
    }
}



Question:


The class Laptop is declared abstract and the code is given below.

public abstract class Laptop {
 public abstract int getRAM();
 public abstract String getProcessor();
 public abstract String getBrand();
}

The code for the main program Hello.java is given below.

import java.util.*;
public class Hello {
 public static void main(String[] args) {
 Scanner sc = new Scanner(System.in);
 Laptop laptop = new AcerLaptop(sc.nextInt(), sc.next(), sc.next());
 System.out.println(laptop.getRAM()+"GB");
 System.out.println(laptop.getProcessor());
 System.out.println(laptop.getBrand());
 }
}

Fill in the missing lines of code to define the class AcerLaptop.java so
that the program executes successfully.

Input Format:
The first line contains RAM, processor, brand separated by a space.

Output Format:
The first line contains RAM.
The second line contains processor.
The third line contains brand.

Boundary Conditions:
1 <= RAM <= 128
Length of the string value of processor and brand is from 2 to 1000.


Example Input/Output 1:

Input:

4
corei5
ACER

Output:

4GB
corei5
ACER
