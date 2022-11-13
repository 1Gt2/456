TEST_METHOD(TestMethod1)
	{
		int number[3] = { 9 , 3 , 5 };
		int maxnum = 10;
		int smallnumber = 0;
		int bracket = 0;
		int printstyle = 0;
		char symbol[2] = { '+','-' };
		char output[6] = { 0 };
		int i = 0;
		int j = 0;
		if (smallnumber == 0)//算式中没有小数
		{
			if (printstyle == 0)//直接打印
			{
				if (bracket == 0)//算式中没有括号
				{
					for (i = 0, j = 0; i < 5; i++, j++)
					{
						output[i] = number[j] + '0';
						if (i < 3)
						{
							output[i + 1] = symbol[j];
						}
						i++;
					}
				}
			}
		}
		char standard[6] = { '9','+','3','-','5' };
		Assert::AreEqual(standard, output);
	}

	TEST_METHOD(TestMethod2)
	{
		int number[3] = { 9 , 3 , 6 };
		//int symbolnum = 2;
		int maxnum = 10;
		int smallnumber = 0;
		int bracket = 1;
		int printstyle = 0;
		char symbol[2] = { '+','/' };
		int bracket_place = 0;
		char output[9] = { 0 };
		int i = 0;
		int j = 0;
		if (smallnumber == 0)//算式中没有小数
		{
			if (printstyle == 0)//输出到屏幕
			{
				if (bracket == 1)//算式中有括号
				{
					if (bracket_place == 0)//括号在前边
					{
						for (i = 0, j = 0; i < 8; i++)
						{
							if (i == 0)
							{
								output[i] = '(';
							}
							else
							{
								output[i] = number[j] + '0';
								if (i == 3)
								{
									output[i + 1] = ')';
									i++;
								}
								if (i < 5)
								{
									output[i + 1] = symbol[j];
								}
								i++;
								j++;
							}
						}
					}
				}
			}
		}
		char standard[9] = { '(','9','+','3',')','/','6' };
		Assert::AreEqual(standard, output);
	}
	TEST_METHOD(TestMethod3)
	{
		int number[3] = { 3 , 5 , 4 };
		int maxnum = 10;
		int smallnumber = 0;
		int bracket = 1;
		int printstyle = 0;
		char symbol[2] = { '*','-' };
		int bracket_place = 1;
		char output[9] = { 0 };
		int i = 0;
		int j = 0;
		if (smallnumber == 0)//算式中没有小数
		{
			if (printstyle == 0)//输出到屏幕
			{
				if (bracket == 1)//算式中有括号
				{
					if (bracket_place == 1)//括号在第二个数和第三个数上
					{
						for (i = 0, j = 0; i < 8; i++)
						{
							if (i == 2)
							{
								output[i] = '(';
							}
							else if (i == 7)
							{
								output[i - 1] = ')';
							}
							else
							{
								output[i] = number[j] + '0';
								if (i < 4)
								{
									output[i + 1] = symbol[j];
								}
								i+=1;
								j+=1;
							}
						}
					}
				}
			}
		}
		char standard[9] = { '3','*','(','5','-','4',')' };
		Assert::AreEqual(standard, output);
	}
	
	
};