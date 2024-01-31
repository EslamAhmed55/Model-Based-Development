function colorName = getColorNameFromCode(colorCode)
    % Function to translate a color code into its corresponding name
    
    % Convert the color code to lowercase for case-insensitivity
    colorCode = lower(colorCode);
    
    % Use a switch statement to determine the color name
    switch colorCode
        case 'ff0000'
            colorName = 'Red';
        case '00ff00'
            colorName = 'Green';
        case '0000ff'
            colorName = 'Blue';
        case 'ffff00'
            colorName = 'Yellow';
        case 'ff00ff'
            colorName = 'Magenta';
        otherwise
            colorName = 'Unknown';
    end
end
