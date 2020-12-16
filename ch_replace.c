

static void ch_replace(char *buf, int buf_size, char ch, uint32_t num)
{
        char *org;

        for (; *buf != '\0'; buf++) {
                if (*buf == ch) {
                        org = (char *) malloc(strlen(buf));
                        strcpy(org, &buf[1]);
                        snprintf(buf, buf_size, "%d%s",
                                 num, org);
                        break;
                }
                buf_size--;
        }
}

