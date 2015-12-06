
; indentation + espace to tab
(setq-default c-default-style "bsd" 
	      c-basic-offset 4
	      tab-width 4
	      indent-tabs-mode t)
; Insert "()"
(defun ffr-insert-parentheses ()
 "insert parentheses and go between them"
 (interactive)
 (insert "()")
 (backward-char 1))
(global-set-key "("  'ffr-insert-parentheses)
(add-hook 'c-mode-common-hook (lambda () (local-set-key "("  'ffr-insert-parentheses)))

; Insert "[]"
(defun ffr-insert-crochet ()
   "insert crochet and go between them"
     (interactive)
     (insert "[]")
     (backward-char 1))
(global-set-key "["  'ffr-insert-crochet)
(add-hook 'c-mode-common-hook (lambda () (local-set-key "["  'ffr-insert-crochet)))

; Insert "{}"
(defun ffr-insert-accolade ()
   "insert crochet and go between them"
     (interactive)
     (insert "{}")
     (backward-char 1)
     (insert "\n")
     (insert "\n")
     (backward-char 1))
(global-set-key "{"  'ffr-insert-accolade)
(add-hook 'c-mode-common-hook (lambda () (local-set-key "{"  'ffr-insert-accolade)))

; Afficher le numéro de colonne
(column-number-mode 1)
(line-number-mode 1)

;; Backup
(setq backup-directory-alist (quote ((".*" . "~/.emacs.d"))))

;; Colorise en Rouge les espace en fin de ligne
(setq-default show-trailing-whitespace t)

;; double ESPACE
(add-hook 'c-mode-common-hook
           '(lambda () (highlight-regexp "  " 'trailing-whitespace)))

