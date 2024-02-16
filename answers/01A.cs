var angles = Array.ConvertAll(Console.ReadLine()!.Split(' '), int.Parse);
Console.WriteLine((angles.All(x => x > 0) && angles.Sum() == 180) ? "Yes" : "No");