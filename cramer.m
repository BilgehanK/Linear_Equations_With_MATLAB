% This function solves linear equations by Cramer method
% Assume that A*X = B
function X = cramer(A, B)
    
    A_bkup = A; %A copy of original A matris
    det_A = det(A);
    if det_A == 0
        disp('System is unsolveable because determinant is 0.');
    else
        n = size(A); n = n(2);
        
        for i = 1:n
            A_bkup(:,i) = B(:,1);
            det_X = det(A_bkup);
            X_bkup(i,1) = det_X/det_A; 
            A_bkup = A; %Return Original
        end
    end

    X = X_bkup;
    
end