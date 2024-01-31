function [meanValue, stdDev] = computeStatistics(numbers)
    % Function to manually calculate mean and standard deviation of a vector
    n = length(numbers);
    
    % Calculate mean
    meanValue = sum(numbers) / n;
    
    % Calculate standard deviation
    squaredDiff = (numbers - meanValue).^2;
    variance = sum(squaredDiff) / n;
    stdDev = sqrt(variance);
    
    fprintf('mean value is %d\n standard deviation %d\n',meanValue,stdDev);
end