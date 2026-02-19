function ydot=spring_mass_damper_dirac(t,y)
k=0.3;
c=0.3;
m=1;
ydot=[y(2)
    -(k/m)*y(1)-(c/m)*y(2)+(sin(2*pi*t*l)./(pi*t)/m)];
end
