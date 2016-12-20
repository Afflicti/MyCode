using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student();
            s1.ID = 1;       
            s1.Name = "Adam Mrkev";
            s1.Class = "I1A";
            s1.Age = 15;

            Student s2 = new Student();
            s2.ID = 2;
            s2.Name = "Albert Moravec";
            s2.Class = "I2A";
            s2.Age = 16;

            List<Student> students = new List<Student>(5);
            students.Add(s1);
            students.Add(s2);

            Class c1 = new Class();
            c1.Name = "I1A";
            c1.classroom = "C309";

            Class c2 = new Class();
            c2.Name = "I2A";
            c2.classroom = "C210";

            List<Class> Classes = new List<Class>(5);
            Classes.Add(c1);
            Classes.Add(c2);

            Teacher t1 = new Teacher();
            t1.Name = "Ivo Zapletal";
            t1.Age = 30;
            t1.Subject = "Programming";

            Teacher t2 = new Teacher();
            t2.Name = "Jan Axman";
            t2.Age = 24;
            t2.Subject = "Art";

            List<Teacher> Teachers = new List<Teacher>(5);
            Teachers.Add(t1);
            Teachers.Add(t1);        

            Console.WriteLine("List of students:");
            foreach (Student student in students)
            {
                Console.WriteLine($"Name: {student.Name} \tAge: {student.Age} \tClass: {student.Class}");
                if (student.InLeasson == true)
                {
                    Console.WriteLine("Student is in a lesson\n");
                }
                else
                {
                    Console.WriteLine("Student is not in a lesson\n");
                }
            }

            Console.WriteLine("List of classes:");
            foreach (Class Class in Classes)
            {
                Console.WriteLine($"Name: {Class.Name} \tClassroom: {Class.classroom}\n");            
            }

            Console.WriteLine("List of teachers:");
            foreach (Teacher Teacher in Teachers)
            {
                Console.WriteLine($"Name: {Teacher.Name} \tAge: {Teacher.Age} \tSubject: {Teacher.Subject}");
                if (Teacher.InClassroom == true)
                {
                    Console.WriteLine("Teacher is in a lesson\n");
                }
                else
                {
                    Console.WriteLine("Teacher is not in a lesson\n");
                }
            }


            Console.ReadLine();
        }

        public class Person
        {
            public string Name;
            public int Age;
        }

        public class Student : Person
        {
            public string Class;
            public int ID;
            public bool InLeasson = false;
        }

        public class Teacher : Person
        {
            public string Subject;
            public bool InClassroom = false;
        }

        public class Class
        {
            public string Name;
            public string classroom;

        }
    }
}
