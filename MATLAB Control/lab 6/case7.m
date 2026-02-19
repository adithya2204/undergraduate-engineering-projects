t=linspace(0,10,100);
c=(3/13)*exp(-2*t)-(1/6)*exp(-3*t)-(5/78)*cos(3*t)-1/78*sin(3*t);
plot(t,c)
xlabel('time(t)')
ylabel('output response c(t)')