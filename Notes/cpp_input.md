# C++中处理输入常见方法总结

1. 处理行输入可能长于目标数组的方法，见`ex0909`

   ```c++
   	cin.get(input, ArSize);
   	while (cin)
   	{
   		cin.get(next);
   		while (next != '\n')
   			cin.get(next);
   		strcount(input);
   		cout << "Enter next line (empty line to quit):\n";
   		cin.get(input, ArSize);
   	}
   ```

   