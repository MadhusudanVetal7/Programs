import java.lang.*;
import java.util.*;
import java.io.*;

class program286
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter file name");
        String Filename = sobj.nextLine()

        File fobj = new File(Filename);

        if(fobj.exists())
        {

        }