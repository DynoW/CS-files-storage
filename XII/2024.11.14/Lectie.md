using system.IO;

intrare:
    StreanReader f = new StreamReader(@"date.in");
citire:
    int x;
    x = int.Parse(f.ReadLine());