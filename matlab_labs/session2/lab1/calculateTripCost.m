function tripCost = calculateTripCost(distance, mode)    
    % Define cost per mile for each mode
    costPerMileCar = 0.5;    
    costPerMileTrain = 0.3;  
    costPerMileBus = 0.2;    
    costPerMileAirplane = 1;
    
    % Calculate the total cost based on the mode using a switch statement
    switch lower(mode)
        case 'car'
            tripCost = distance * costPerMileCar;
        case 'train'
            tripCost = distance * costPerMileTrain;
        case 'bus'
            tripCost = distance * costPerMileBus;
        case 'airplane'
            tripCost = distance * costPerMileAirplane;
        otherwise
            error('Invalid mode. Please choose car, train, bus, or airplane.');
    end
end
