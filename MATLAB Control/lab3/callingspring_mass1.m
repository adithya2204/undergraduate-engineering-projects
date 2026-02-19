tspan=[0,10];


y0 =[0
    0
    0
    0.5];

[t,y]=ode45(@spring_mass1,tspan,y0);

x1=y(:,1);

x1dot=y(:,2);

x2=y(:,3);

x2dot=y(:,4);

plot(t,x1,'r.-')