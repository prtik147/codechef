t=int(input(""))
while t:
	t=t-1
	n=int(input(""))
	c=0
	s=0
	ans=0
	ans2=0
	for num in list(map(int,input().split())):
		#num=0
		#num=int(input(""))

		if num>0:
			c=c+1
			ans=ans+num
		if num<0:
			ans2=ans2+num
	ans=ans*c
	ans=ans+ans2
	print(ans)