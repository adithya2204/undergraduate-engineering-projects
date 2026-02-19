t=linspace(0,10,100);
c=(1/6)*exp*(-3*t)-(1/6)*cos(3*t)+(1/6)*sin(3*t);
plot(t,c)
xlabel('time(t)')
ylabel('output response c(t)')