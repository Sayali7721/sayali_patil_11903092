(defun first-n-loop (list n)
  "Returns first n elements of the list."
  (loop for i below n
     collect (nth i list)))

(first-n-loop '(a b c d e) 3)
