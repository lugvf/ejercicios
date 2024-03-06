using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ejemplo_en_clase
{
    class Program
    {
        static int[] vector = new int[30];
        static int dias;
        static string nombre, apellido;
        static void Main(string[] args)
        {
            Console.Write("ingrese su nombre: ");
            nombre = Console.ReadLine();
            Console.Write("ingrese su apellido: ");
            apellido = Console.ReadLine();
            Console.Write("ingrese los dias trabajados: ");
            dias = int.Parse(Console.ReadLine());
            for (int i = 0; i < dias; i++)
            {
                Console.WriteLine($"numero {i}");
                vector[i] = int.Parse(Console.ReadLine());
              
            }
            for(int i = 0; i < dias; i++)
            {
                Console.WriteLine($"los {vector[i]}");
           
            }
         
       
        }
    }
}
