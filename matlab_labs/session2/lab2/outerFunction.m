function outerFunction()
    % Main function
    
    fprintf('Executing outerFunction\n');
    
    % Call innerFunction from outerFunction
    % Prompt the user for two numbers
    num1 = input('Enter the first number: ');
    num2 = input('Enter the second number: ');

    result = innerFunction(num1,num2);
    
    % Display the result
    fprintf('Result from innerFunction: %d\n', result);
end

function sumResult = innerFunction(a, b)
    % Function to add two numbers
    sumResult = a + b;
end