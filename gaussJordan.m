%This function solves a nxn linear system using
%Gauss-Jordan method

function [C] = gaussJordan(A, B)
    
    %n is a vector that holds dimensions of A. A should be square matrix.
    %So n vector's first element is enough.
    n = size(A); n = n(1);
    %m is a vector that holds row count of B.
    m = size(B); m = m(1);
    
    %For calculation n = m and det(A)~=0 required.
    if n == m
        
        dett = det(A);
        if dett == 0
            C_aug = 0;
            
        else
            %Let A*X = B and C augmented matrix is [A B]
            C_aug = [A B];
            
            %Row operations - Downward
            for p=1:n-1
                for r=p+1:n
                    alpha = C_aug(r,p)/C_aug(p,p);
                    C_aug(r,:) = C_aug(r,:) - alpha * C_aug(p,:);
                end
            end

            %Row operations - Upward
            for p=n:-1:2
                for r=p-1:-1:1
                    alpha = C_aug(r,p)/C_aug(p,p);
                    C_aug(r,:) = C_aug(r,:) - alpha * C_aug(p,:);
                end
            end

            %Simplifying
            for p=1:n
                C_aug(p,:) = C_aug(p,:)/C_aug(p,p);
            end
        end
    else
        C_aug = 0;
    end
    
    C = C_aug
end %Function End

