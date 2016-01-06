def temperature(temp):
	if temp < 10:
		print ("it's cold")
		if temp <= 0:
			print("water would freeze")
	elif temp > 30:
		print ("it's hot")
		if temp >= 100:
			print("water would boil")
	else:
		print("it's ok")
	return

temp = int(input())
temperature(temp)