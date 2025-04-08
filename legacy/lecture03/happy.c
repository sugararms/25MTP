" 웃는 얼굴 삽입 함수
function! InsertSmiley()
    normal! i☺
endfunction

" InsertSmiley 함수를 호출하는 키맵
nnoremap <Leader>s :call InsertSmiley()<CR
