#ifndef FORM_H
# define FORM_H

# include <iostream>
//TODOSDAF LKSDJF;LSDAJFLK;DSAJ F
class Bureaucrat {
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat & src);
        
        Bureaucrat &    operator=(const Bureaucrat & src);
        std::string     getName(void) const;
        int             getGrade(void) const;
        void            incGrade(void);
        void            decGrade(void);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &    operator<<(std::ostream & o, const Bureaucrat & src);

#endif