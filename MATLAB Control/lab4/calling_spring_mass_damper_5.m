tspan=[0,30];
x0=[0
    1];
[t,y]=ode113(@spring_mass_damper_5,tspan,x0);
x=y(:,1);
xdot=y(:,2);
subplot(2,1,1);
plot(t,x);
xlabel('time');
ylabel('x');
grid on;

subplot(2,1,2);
plot(t,xdot);
xlabel('t');
ylabel('xdot');
grid on;
