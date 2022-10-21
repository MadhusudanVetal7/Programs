import java.lang.*;
import java.util.*;

class Student
{
    public int RID ;
    public String Name;
    public int Salary;

    public Student(int no, String str, int value)
    {
        this.Name = str;
        this.RID = no;
        this.Salary = value;
    }

}

class program360
{
    public static void main(String arg[])
    {
        Student obj = new Student(11,"Mayur",1000);
        System.out.println(obj.RID);
        System.out.println(obj.Name);
        System.out.println(obj.Salary);
    }
}