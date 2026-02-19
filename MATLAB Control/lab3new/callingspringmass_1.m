tspan=[0,50];


y0 =[0
    0
    0
    0.5];

[t,y]=ode45(@spring_mass1,tspan,y0);

x1=y(:,1);

x1dot=y(:,2);

x2=y(:,3);

x2dot=y(:,4);

subplot(2,2,1)

plot(t,x1,'b.-');

xlabel('time (t)');

ylabel('x1(t)');

subplot(2,2,2)
plot(t,x1dot,'b.-');

xlabel('time (t)');

ylabel('x1dot(t)');


subplot(2,2,3)
plot(t,x2,'r.-');

xlabel('time (t)');

ylabel('x2(t)');


subplot(2,2,4)
plot(t,x2dot,'r.-');

xlabel('time (t)');

ylabel('x2dot(t)');



